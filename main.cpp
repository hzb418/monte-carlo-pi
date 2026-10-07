#include <iostream>
#include <random>

int main(){
    const int total=100000;
    int inside=0;

    std::mt19937 generator(2026);
    std::uniform_real_distribution<double> distribution(-1.0,1.0);

    for(int i=0;i<total;++i){
        double x=distribution(generator);
        double y=distribution(generator);

        if(x*x+y*y<=1.0){
	  ++inside;
        }
    }

    double pi_hat=4.0*inside/total;

    std::cout << "Number of points: " << total << '\n';
    std::cout << "Points inside circle: " << inside << '\n';
    std::cout << "Estimated Pi: " << pi_hat << '\n';

    return 0;
}
