#include <iostream>
#include<algorithm>
using namespace std;

struct item {
   int value, weight;
};

bool cmp(struct item a, struct item b) {     //compare item a and item b based on the ration of value and weight
   double aRatio = (double)a.value / a.weight;
   double bRatio = (double)b.value / b.weight;
   return aRatio > bRatio;
}

double fractionalKnapsack(int weight, item itemList[], int n) {
   sort(itemList, itemList + n, cmp);      //sort item list using compare function
   int currWeight = 0;        // Current weight in knapsack
   double knapsackVal = 0.0;

   for (int i = 0; i < n; i++) {       //check through all items
      if (currWeight + itemList[i].weight <= weight) {     //when the space is enough for selected item, add it
         currWeight += itemList[i].weight;
         knapsackVal += itemList[i].value;

      }else{       //when no place for whole item, break it into smaller parts
         int remaining = weight - currWeight;
         knapsackVal += itemList[i].value * ((double) remaining / itemList[i].weight);
         break;
      }
   }
   return knapsackVal;
}

int main() {
   int weight = 50;     // Weight of knapsack
   item itemList[] = {{60, 10}, {100, 20}, {120, 30}};
   int n = 3;
   cout << "Maximum value: " << fractionalKnapsack(weight, itemList, n);
}
