#include <iostream>

using namespace std;

int main()
{
    int meal;
    int mealQty;
    int drinks;
    int drinksQty;
    double Pancakes = 20.00;
    double Waffles = 15.00;
    double ScrambledEggs = 10.00;
    double Sandwich = 5.00;
    double AmountOfSalePancakes = 0;
    double AmountOfSaleWaffles = 0;
    double AmountOfSaleScrambledEggs = 0;
    double AmountOfSaleSandwich = 0;
    double Coke = 2.50;
    double Tea = 4.00;
    double Milk = 3.25;
    double Water = 1.75;
    double AmountOfSaleCoke = 0;
    double AmountOfSaleTea = 0;
    double AmountOfSaleMilk = 0;
    double AmountOfSaleWater = 0;
    double cash;
    double total = 0;
 
 
    cout<<"\n\t JM NGA FOOD CASHIERING\t\n\n";
    cout<<"\t\t =MEAL= \t\n\n";
 
    cout<<" [1] Pancakes..............$20.00\n [2] Waffles...........$15.00\n [3] Scrambled Eggs.....$10.00\n [4] Sandwich.....$5.00\n";
 
    cout<<"What is your meal: ";
    cin>>meal;
    cout<<"How many?: ";
    cin>>mealQty;
 
    cout<<"\t\t =DRINKS= \t\t\n\n";
 
    cout<<" [1] Coke................$2.50\n [2] Tea.................$4.00\n [3] Milk................$3.25\n [4] Water...............$1.75\n";
    cout<<"What is your drinks: ";
    cin>>drinks;
    cout<<"How many?: ";
    cin>>drinksQty;
 
    cout<<"\n\t      =Item Ordered=\t\t\n\n";
 
    switch (meal)
    {
        case 1: 
            cout<<" Pancakes..............$20.00 X "<<mealQty<<" = "<<mealQty * Pancakes<<"\n";
            AmountOfSalePancakes = mealQty * Pancakes;
            break;
  
        case 2: 
            cout<<" Waffles...........$15.00 X "<<mealQty<<" = "<<mealQty * Waffles<<"\n";
            AmountOfSaleWaffles = mealQty * Waffles;
            break;
        case 3:   
            cout<<" Scrambled Eggs.....$10.00 X "<<mealQty<<" = "<<mealQty * ScrambledEggs<<"\n";
            AmountOfSaleScrambledEggs = mealQty * ScrambledEggs;
            break;
        case 4:
            cout<<" Sandwich..............$5.00 X "<<mealQty<<" = "<<mealQty * Sandwich<<"\n";
            AmountOfSaleSandwich = mealQty * Sandwich;
            break;
    }
    switch (drinks)
    {
        case 1:
            cout<<" Coke................$2.50 X "<<drinksQty<<" = "<<drinksQty * Coke<<"\n\n";
            AmountOfSaleCoke = drinksQty * Coke;
            break; 
        case 2: 
            cout<<" Tea.................$4.00 X "<<drinksQty<<" = "<<drinksQty * Tea<<"\n\n";
            AmountOfSaleTea = drinksQty * Tea;
            break;
        case 3:
            cout<<" Milk................$3.25 X "<<drinksQty<<" = "<<drinksQty * Milk<<"\n\n";
            AmountOfSaleMilk = drinksQty * Milk;
            break;
        case 4:
            cout<<" Water...............$1.75 X "<<drinksQty<<" = "<<drinksQty * Water<<"\n\n";
            AmountOfSaleWater = drinksQty * Water;
            break;
    } 

  
    total = 0;
    total = total + AmountOfSalePancakes + AmountOfSaleWaffles + AmountOfSaleScrambledEggs + AmountOfSaleSandwich + AmountOfSaleCoke + AmountOfSaleTea + AmountOfSaleMilk + AmountOfSaleWater;
  
    cout<<"Total Amount is: $"<<total<<"\n";
    cout<<"Cash: $"; 
    cin>>cash;
    cout<<"Change: "<< cash - total<<"\n\n";
  
    cout<<"ENJOY YOUR MEAL!\n\n\n";
    cout<<"\n\n\t-----------------------\n";
}