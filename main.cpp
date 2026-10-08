#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>

int main(){
    const int sample_sizes[]={100,1000,10000,100000,1000000};
    double pi=3.14159265;

    std::cout << std::left
              << std::setw(10) << "N"
              << std::setw(21) << "Points inside circle"
              << std::setw(15) << "Estimated Pi"
              << std::setw(15) << "Absolute Error"
              << '\n';

    for(int i=0;i<5;++i){
        int total=sample_sizes[i];
        int inside=0;
        std::mt19937 generator(2026);
        std::uniform_real_distribution<double> distribution(-1.0,1.0);

        for(int j=0;j<total;++j){
             double x=distribution(generator);
             double y=distribution(generator);

             if(x*x+y*y<=1.0){
                ++inside;
            }
        }
        double pi_hat=4.0*inside/total;

        double error=std::abs(pi_hat-pi);

        std::cout << std::left
                  << std::setw(10) << total
                  << std::setw(21) << inside
                  << std::setw(15) << pi_hat
                  << std::setw(15) << error
                  << '\n';
    }
    return 0;
}
