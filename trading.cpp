#include <iostream>
#include <vector>

// Simple structure to represent a trading signal
struct Signal {
    int timestamp;  // Timestamp of the signal
    bool buy;       // Buy signal (true) or sell signal (false)
};

// Function to generate trading signals based on moving average crossover
std::vector<Signal> generateSignals(const std::vector<double>& prices, int shortWindow, int longWindow) {
    std::vector<Signal> signals;

    if (shortWindow >= longWindow || prices.size() < longWindow) {
        std::cerr << "Invalid parameters for moving average crossover strategy\n";
        return signals;
    }

    // Calculate short-term and long-term moving averages
    for (int i = longWindow - 1; i < prices.size(); ++i) {
        double shortTermMA = 0.0;
        double longTermMA = 0.0;

        // Calculate short-term moving average
        for (int j = i - shortWindow + 1; j <= i; ++j) {
            shortTermMA += prices[j];
        }
        shortTermMA /= shortWindow;

        // Calculate long-term moving average
        for (int j = i - longWindow + 1; j <= i; ++j) {
            longTermMA += prices[j];
        }
        longTermMA /= longWindow;

        // Generate buy signal if short-term MA crosses above long-term MA
        if (shortTermMA > longTermMA && i > 0 && prices[i - 1] <= longTermMA) {
            signals.push_back({i, true});
        }
        // Generate sell signal if short-term MA crosses below long-term MA
        else if (shortTermMA < longTermMA && i > 0 && prices[i - 1] >= longTermMA) {
            signals.push_back({i, false});
        }
    }

    return signals;
}

int main() {
    // Example price data (replace this with actual price data)
    std::vector<double> prices = {100.0, 105.0, 95.0, 110.0, 90.0, 120.0, 85.0, 130.0, 80.0};

    // Define moving average window sizes
    int shortWindow = 3;
    int longWindow = 5;

    // Generate trading signals
    std::vector<Signal> signals = generateSignals(prices, shortWindow, longWindow);

    // Print the generated signals
    std::cout << "Generated Signals:\n";
    for (const Signal& signal : signals) {
        std::cout << "Timestamp: " << signal.timestamp << ", Action: " << (signal.buy ? "Buy" : "Sell") << "\n";
    }

    return 0;
}
