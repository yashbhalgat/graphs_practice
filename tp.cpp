#include <iostream>

using namespace std;

typedef int km_per_hour ;
typedef int points ;

km_per_hour current_speed ;  //"km_per_hour" is synonymous with "int" here,
points high_score = 10;          //and thus, the compiler treats our new variables as integers.

void congratulate(points your_score) {
    if (your_score > high_score) cout<<"good"<<endl;
    }

void foo() {
    km_per_hour km100 = 100;
    congratulate(km100);
    }

int main(){ 
	foo();
	}
 
