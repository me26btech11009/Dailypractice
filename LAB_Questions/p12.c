/*
QUESTION-
For this programming exercise, assume that a tomato plant has good growing
conditions when both of the following are true:

1. The temperature is between 18°C and 30°C, inclusive.
2. The soil moisture is at least 40%.

Given the temperature and soil moisture, determine the condition of the plant.

Use the following rules:

- If both conditions are satisfied, print:
  Good conditions

- If the temperature is below 18°C and the soil moisture is below 40%, print:
  Too cold and too dry

- If the temperature is above 30°C and the soil moisture is below 40%, print:
  Too hot and too dry

- If only the temperature is below 18°C, print:
  Too cold

- If only the temperature is above 30°C, print:
  Too hot

- If only the soil moisture is below 40%, print:
  Too dry

Input:
Two integers:
temperature moisture

where:
- temperature is the temperature in degrees Celsius
- moisture is the soil moisture percentage

Output:
Print exactly one of the following:

Good conditions
Too cold
Too hot
Too dry
Too cold and too dry
Too hot and too dry

Example:
Input:
25 60

Output:
Good conditions
*/

#include <stdio.h>

int main(void) {
    int temperature, moisture;

    /* Read temperature and soil moisture */
    scanf("%d %d", &temperature, &moisture);

    /*
       Write conditional statements here to print exactly one of:

       Good conditions
       Too cold
       Too hot
       Too dry
       Too cold and too dry
       Too hot and too dry
    */
    
    if (temperature>=18 && temperature<=30 && moisture>=40){
        printf("Good conditions\n");
    }
    else if(temperature>30 && moisture<40){
        printf("Too hot and too dry\n");
    }
    else if(temperature < 18 && moisture>40){
        printf("Too cold\n");
    }
    else if(temperature > 30 && moisture >40){
        printf("Too hot\n");
    }
    else if(temperature>=18 && temperature<=30 && moisture < 40){
        printf("Too dry\n");
    }
    else if(temperature<18 && moisture<40){
        printf("Too cold and too dry\n");
    }
    

    return 0;
}
