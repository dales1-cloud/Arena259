#include <iostream>

bool dodge(){
    bool evade = false;
    if(damage >= 30){
        if((rand() % 100) < 25){
            evade = true;
        }
    }

    else if(damage >= 40){
        if((rand() % 100) < 50){
            evade = true;
        }
    }

    else if(damage >= 50){
        if((rand() % 100) < 75){
            evade = true;
        }
    }
    return evade;
}

int weather_modifier(){
    int weather = 0;
    int random_weather = rand() % 5;
    weather = random_weather;
    if(weather == 0){
        cout << "weather conditions: Sunny";
    }

    else if(weather == 1){
        cout << "weather conditions: cloudy";
    }

    else if(weather == 2){
        cout << "weather conditions: rain";
    }

    else if(weather == 3){
        cout << "weather condition: storm";
    }

    else if (weather == 4){
        cout << "weather condition: snow";
    }
    
    return weather;
}

int first_attacker(){
    int first = 0;
    first = rand() % 2;
    if(first == 0){
        cout << "creature a attacks first";
    }

    else if(first == 1){
        cout << "creature b attacks first";
    }
}