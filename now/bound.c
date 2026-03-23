
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res = {true, true, false, 0};
    	int i = 0;
    	
    	while(i < length){
    		if(arr[i] > value){
    			res.is_upperbound = false;
    		}
    		if(arr[i] < value){
    			res.is_lowerbound = false;
    		} 
    		if(!res.exists && arr[i] == value){
    			res.exists = true;
    			res.where = i;
    		}
    		i++;
    	}
    return res;
}

int main(void) {
    int a[ARRAY_SIZE];
    int value=9;
    
    int i = 0;
    	printf("Ingrese un Numero entero: \n");
    	scanf("%d", &value);
	
    while(i < ARRAY_SIZE){    
	printf("Ingrese un valor para la posicion %d\n", i);
	scanf("%d", &a[i]);
	i++;
    }
    struct bound_data result = check_bound(value, a, ARRAY_SIZE);

    printf("%d", result.is_upperbound);
    printf("%d", result.is_lowerbound);
    printf("%u", result.exists);
    printf("%u", result.where);

    return 0;
}

