#include <stdio.h>
#define N 10
//Name: Hyelampa Kolo. This program accepts input from a user and calculates how many minutes an average viewer will watch a show.
//Function initiallization
int find_minutes(int *minutes, int n);

//Main function
int main(){
	int n, i;

	printf("Enter the number of interesting minutes: ");
	scanf("%d", &n);

	int minutes[n+1];
	minutes[n] = 45;

	printf("Enter the interesting minutes: ");
	for (i = 0; i < n; i++){
		scanf("%d", &minutes[i]);
	}
	//Function call
	int result = find_minutes(minutes, n);
    //Displaying our results
	printf("Output: %d\n", result);
	return 0;

}

//Function definition
int find_minutes(int *minutes, int n){
	int *p, *q;

    //Iterating over loop
	for (p = minutes; p < minutes + n; p++){
        q = minutes;
        //Conditional statement for loop to continue
		if ((*(p+1) - *p)<=7){
		}else{
            break;
        }
	}
	//If statements to check if the input meets any of our return conditions
	if(*q > 7){
        *p = 7;
        return *p;
	}else if ((*(p+1) - *p)>7){
        return (*p + 7);
    }else if (p == (n+minutes)){
        *p = 45;
        return *p;
    }

    return 0;
}
