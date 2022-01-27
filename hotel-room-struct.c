#include<stdio.h>
#include <string.h>

//Define a structure that can describe a hotel.
//It should have the member that includes the name, address, grade, room charge and number of rooms.
//Write a function to print out hotel of given grade in order of room charges.



struct Hotel{
    char name[30];
    char address[50];
    int grade;
    float charge;
    int rooms;
};

void swap(struct Hotel *x, struct Hotel *y){
    struct Hotel c = *x;
    *x = *y;
    *y = c;
}
int main() {

    char nameArr[5][15] = {"Stanza Hotel","Golden Tulip","Piccadilly","Taj Hotel","Radisson"};
    char addArr[5][50] = {"KP III, Greater Noida", "Raj Marg, Lucknow", "Kanpur Road, Lucknow", "Marine Drive, Lucknow", "Mahipalpur, New Delhi"};
    char gradeArr[5] = {2,3,3,5,5};
    float chargeArr[5] = {13000.00, 15000.00, 17000.00, 35000.00, 30000.00};
    int roomsArr[5] = {25,34,67,90, 160};

    struct Hotel list[5];
    for(int i =0; i<5; ++i){
        //printf("%s", nameArr[i]);
        strcpy(list[i].name, nameArr[i]);
        strcpy(list[i].address, addArr[i]);
        list[i].grade = gradeArr[i];
        list[i].charge = chargeArr[i];
        list[i].rooms = roomsArr[i];
    }

    // input things

    int g;
    printf("Enter the room grade: ");
    scanf("%d", &g);

    struct Hotel filteredList[100];
    int k = 0;
    for(int i = 0; i < 5; ++i){
        if(list[i].grade == g){
            filteredList[k++] = list[i];
        }
    }

    //sorting it out on the bases of charge using selection sort

    for(int i = 0; i < k-1; ++i){
        float minCharge = filteredList[i].charge;
        for(int j = i+1; j < k; ++j){
            if(minCharge > filteredList[j].charge){
                swap(&filteredList[i], &filteredList[j]);
                minCharge = filteredList[j].charge;
            }
        }
    }

    printf("\n");
    printf("The list of hotels with a %d grade: \n", g);
    for(int i = 0; i < k; ++i){
        printf("Name- %s \n", filteredList[i].name);
        printf("Address- %s \n", filteredList[i].address);
        printf("Grade- %d \n", filteredList[i].grade);
        printf("Charge- ₹ %f \n", filteredList[i].charge);
        printf("Rooms- %d \n\n", filteredList[i].rooms);
    }

}