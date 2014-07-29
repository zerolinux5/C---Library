#include "functions.h"

double tempConverter(double temp, string from, string to)
{
        if(from.compare("K") == 0){
                double kToC = temp - 273.15;
                if(to.compare("C") == 0){
                        return kToC;
                } else {
                        return (kToC * 1.8 + 32);
                }
        } else if (from.compare("C") == 0){
                if(to.compare("K") == 0){
                        return (temp+273.15);
                } else {
                        return (temp * (9/5) + 32);
                }
        } else {
                if (to.compare("C") == 0){
                        return ((temp - 32) * (5/9));
                } else {
                        return ((5/9)*(temp-32) + 273.15);
                }
        }
}

double massConverter(double mass, string from, string to)
{
        if(from.compare("kg") == 0){
                if(to.compare("lb") == 0){
                        return (mass*2.20462);
                } else {
                        return (mass/1000);
                }
        } else if (from.compare("g") == 0){
                if(to.compare("lb") == 0){
                        return (mass * 0.00220462);
                } else {
                        return (mass * 1000);
                }
        } else {
                if (to.compare("kg") == 0){
                        return (mass * 0.453592);
                } else {
                        return (mass * 453.592);
                }
        }
}
