#include <stdio.h>

struct Address {
    char village[100];
    int pincode;
};

struct Member {
    int id;
    char name[100];
    double shareCapital;
    struct Address address;
};

int main() {
    struct Member array[1000];
    int n;
    double total = 0.0;
    int maximumShareIndex = 0;

    printf("Enter the number of members: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for member %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &array[i].id);
        
        printf("Name: ");
        scanf("%s", array[i].name);
        
        printf("Share Capital: ");
        scanf("%lf", &array[i].shareCapital);
        
        printf("Village: ");
        scanf("%s", array[i].address.village);
        
        printf("Pincode: ");
        scanf("%d", &array[i].address.pincode);
        
        total = total + array[i].shareCapital;
        
        if (array[i].shareCapital > array[maximumShareIndex].shareCapital) {
            maximumShareIndex = i;
        }
    }
    
    printf("\n\nThe total share holding: %f\n", total);
    printf("Highest Shareholder -> ID: %d, Name: %s, Share: %f\n", 
           array[maximumShareIndex].id, 
           array[maximumShareIndex].name, 
           array[maximumShareIndex].shareCapital);

    return 0;
}
