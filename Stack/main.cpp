#include <iostream> 
#include <type_traits> 

template<typename T1, typename T2>
// Function that adds unknown value type. No types needed aka no int, float or char decleration needed. 
auto add(T1 a, T2 b) -> decltype(a + b) { 
    return a+b;
}

int main() {
    auto retult1 = add(5, 3.2);

    std::cout << retult1 << std::endl;

}

// Templates, a way to generalize a function. 
// int square (int x)
// double square (double x)
// This can be written as a template insted of writing each out individualy.



// Recursive function, it calls itself

int factoral(int n) {
     if (n == 0) 
     
     return 1;

     return n * factoral(n-1)

}

int main(){

    int n
    std::cout << "Enter a number: ";
    std::cin >> n;

    
}
