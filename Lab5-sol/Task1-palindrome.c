#include <stdio.h>

// Function to reverse a number
long long reverse(long long n) {
    long long r = 0;
    
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    long long num;
    int steps = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);
    
    if(num == 196){
	
    printf("palindrome of this no is not possible\n");
    }
    else{
    	while (num != reverse(num)) {
        num = num + reverse(num);
        steps++;
    }
    printf("Palindrome: %lld\n", num);
    printf("Steps: %d\n", steps);
	}

    return 0;
}
