#include <stdio.h>
#include <stdlib.h>


// Fahrenheit to Celsius function
void FtoC(){
    int userInFtemp;
    int fahrenheitToCelsius;
    printf("\tPlease enter the Fahrenheit degree: ");
    scanf("\t%d", &userInFtemp);
    fahrenheitToCelsius = ((userInFtemp-32) * (5.0/9.0));
    printf("\n\Celsius: %d\n", fahrenheitToCelsius);

}
// Celsius to Fahrenheit function
void CtoF(){
    int userInCtemp;
    int celsiusToFahrenheit;
    printf("\tPlease enter the Celsius degree: ");
    scanf("\t%d", &userInCtemp);
    celsiusToFahrenheit = ((9.0/5.0)*userInCtemp + 32);
    printf("\n\tFahrenheit: %d\n", celsiusToFahrenheit);

}
// kg to pound function
void kgToPound(){
    int userInKg;
    int kgConvertedToPound;
    printf("\tPlease enter the kg mass: ");
    scanf("%d", &userInKg);
    kgConvertedToPound = (userInKg * 2.205);
    printf("\n\tPound: %d\n", kgConvertedToPound);
}
// pound to kg function
void poundToKg(){
    int userInPound;
    int poundConvertedToKg;
    printf("\tPlease enter the pound mass: ");
    scanf("%d", &userInPound);
    poundConvertedToKg = (userInPound / 2.205);
    printf("\n\tKg: %d\n", poundConvertedToKg);
}
// gram to pound
void gramToPound(){
    int userInGram;
    int gramConvertedToPound;
    printf("\tPlease enter the gram mass: ");
    scanf("%d", userInGram);
    gramConvertedToPound = (userInGram / 454);
    printf("\n\tPound: %d\n", gramConvertedToPound);
}
// Km to Miles function
void kmToMiles(){
    double userInKm;
    double kmConvertedToMile;
    printf("\tPlease enter the KM length: ");
    scanf("%lf", &userInKm);
    kmConvertedToMile = (userInKm / 1.609);
    printf("\n\tMiles: %.2f\n", kmConvertedToMile);
}
// Miles to Km
void milesToKm(){
    double userInMile;
    double mileConvertedToKm;
    printf("\tPlease enter the Mile length: ");
    scanf("%lf", &userInMile);
    mileConvertedToKm = (userInMile * 1.609);
    printf("\n\tKm: %.2f\n", mileConvertedToKm);
}
// px to em functions
void pxToEm(){
    double userInPx;
    double pxConvertedToEm;
    printf("\tPlease enter the px size: ");
    scanf("%lf", &userInPx);
    pxConvertedToEm = (userInPx / 16);
    printf("\n\tEm: %2.f\n", pxConvertedToEm);
}
// em to px functions
void emToPx(){
    double userInEm;
    double emConvertedToPx;
    printf("\tPlease enter the em size: ");
    scanf("%lf", &userInEm);
    emConvertedToPx = userInEm * 16;
    printf("\n\tPx: %2.f\n", emConvertedToPx);
}



int main()
{

    char category;
    int tempChoice;
    int massChoice;
    int lenghChoice;
    int designUnitsChoice;
    //int userInputF;  User inputted Fahrenheit;
    //int userInputC;  User inputted Celsius;



    printf("\n\n\t\t\t\t\t|\tWelcome to Unit Converter!\t|\t\t\t\t\t\n\n");
    printf("\tHere is a list of conversation to choose from: \n\n");
    printf("\t====> Temperature (T) , Mass (M) , Length (L) , Design Units (P) , And Q to exit from programm\n\n");
    printf("\t-----------------------------------------------------------------------\n");
    while(category != 'Q'){
    printf("\n\tPlease enter letter you want to convert: ");
    scanf("%s",&category);

    if(category == 'T'){
    printf("\n\n\n\t\t\t\t\t|\tWelcome to Temperature Converter!\t|\t\t\t\t\t\n\n");
    printf("\tHere is a list of conversation to choose from: \n\n");
    printf("\tEnter 1 for Fahrenheit to Celsius. \n");
    printf("\tEnter 2 for Celsius to Fahrenheit. \n");
    scanf("%d", &tempChoice);
        if(tempChoice == 1){
            FtoC();
        }else if(tempChoice == 2){
            CtoF();
        }else{
            printf("\n\n\t\tPlease enter correct choice!!! \n");
        }
    }else if(category == 'M'){
        printf("\n\n\n\t\t\t\t\t|\tWelcome to Mass Converter!\t|\t\t\t\t\t\n\n");
        printf("\tHere is a list of conversation to choose from: \n\n");
        printf("\tEnter 1 for KG to Pound. \n");
        printf("\tEnter 2 for Pound to KG. \n");
        printf("\tEnter 3 for gram to Pound. \n ");
        scanf("%d", &massChoice);
        if(massChoice == 1){
            kgToPound();
        }else if(massChoice == 2){
            poundToKg();
        }else if(massChoice == 3){
            gramToPound();
        }else{
        printf("\n\n\t\tPlease enter correct choice!!! \n");
        }
    }else if(category == 'L'){
        printf("\n\n\n\t\t\t\t\t|\tWelcome to Length Converter!\t|\t\t\t\t\t\n\n");
        printf("\tHere is a list of conversation to choose from: \n\n");
        printf("\tEnter 1 for Km to Miles. \n");
        printf("\tEnter 2 for Miles to Km. \n");
        scanf("%d", &lenghChoice);
        if(lenghChoice == 1){
            kmToMiles();
        }else if(lenghChoice == 2){
            milesToKm();
        }else{
        printf("\n\n\t\tPlease enter correct choice!!! \n");
        }
    }else if(category == 'P'){
        printf("\n\n\n\t\t\t\t\t|\tWelcome to Design Units Converter!\t|\t\t\t\t\t\n\n");
        printf("\tHere is a list of conversation to choose from: \n\n");
        printf("\tEnter 1 for px to em. \n");
        printf("\tEnter 2 for em to px. \n");
        scanf("%d", &designUnitsChoice);
        if(designUnitsChoice == 1){
            pxToEm();
        }else if(designUnitsChoice == 2){
            emToPx();
        }else{
        printf("\n\n\t\tPlease enter correct choice!!! \n");
        }
    }else if(category == 'Q'){
        exit(0);
    }else{
        printf("\n\n\t\tPlease enter correct choice!!! \n");
        }
    }
    return 0 ;
}
