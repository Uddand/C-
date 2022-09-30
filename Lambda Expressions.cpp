Lambda Expressions:

The Expression can allows us to define the anonymous function objects(functor) which can either inline or pass an parameters.
•	For creating  anonymous functors is a more convenient and concise way
•	This are more convenient because don’t need to overload the “()” operator in a separate class or structure.
•	SYNTAX:
AUTO FUNCTION_NAME=[]() {
………
………
………
};
•	CALL TO USE : FUNCTION_NAME();
	AUTO : it’s a keyword it is automatically deduced the return type.
	[]: it is call Lambda interducer which denotes the start of the lambda expression.
	():it is called parameter list. Which is similar to operator “()”of a normal function.
	The lambda expression is similar to the  Normal function.but lambda expression is invoked 

Ex:
#include<iostream>
Using namespace std;
Auto add=[]() {
Cout<<”Hello world”<<endl;
};
Add();// Hello World
Return 0;
}

Lambada Expression passing Parametrers:-------

#include <iostream>

using namespace std;

int main() {

  // lambda function that takes two integer
  //  parameters and displays their sum
  auto add = [] (char a, float b) {
   cout << "Sum = " << a + b;
  };

  // call the lambda function
  
  add('#', 78.5);//A=65 & a=97 & #=35 & 0=48

  return 0;
}


Lambda Expression with return type:-----
->Lambda expression can also Have a return type
Ex:
auto add=[](int a,int b){
cout<<”sum=”<<a+b<<endl;
};
add(10,20);
return 0;
}

-> the above code we not have explicitly define the return type,
Because its have single statement and its always return a interger type .
->But for multiple return statements of different data type,we have to define expelisity type.
#include <iostream>

using namespace std;

int main() {

  // lambda function with explicit return type 'double'
  // returns the sum or the average depending on operation
  auto operation = []  (int a, int b,  string op) -> double {
    if (op == "sum") {
      return a + b;//return integer 
    }
    else {
      return (a + b) / 2.0;//return duble type
    }
  };

  int num1 = 2;//3
  int num2 = 9;//3

  // find the sum of num1 and num2
  auto sum = operation(num1, num2, "sum"); 
  cout << "Sum = " << sum << endl;

  // find the average of num1 and num2
  auto avg = operation(num1, num2, "avg"); 
  cout << "Average = " << avg;

  return 0;
}


Lambda Expression passed argument in STL:-----
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  // initialize vector of integers
  vector<int> nums = {1, 2, 3, 4, 5, 8, 10, 12};

  int even_count = count_if(nums.begin(), nums.end(), [](int num) {
    return num % 2 == 0;
  });
  int odd_count = count_if(nums.begin(), nums.end(), [](int num) {
    return num % 2==! 0;
  });


  cout << "There are " << even_count << " even numbers.";
  cout << "There are " << odd_count << " odd numbers.";

  return 0;
}


Quations:
1).Can we use both capture by value and capture by reference in a single lambda capture clause?
Yes, we can use both capture by variable and capture by reference in a single lambda expression.
For example,
•	[&num1, num2] - capture num1 by reference and num2 by value
•	[&, num1, num2] - capture num1 and num2 by value and the rest by reference
•	[=, &num1, &num2] - capture num1 and num2 by reference and the rest by value


Program:-

#include <iostream>
using namespace std;

int main() {

  int num1 = 0;
  int num2 = 3;

  cout << "Initially, num1 = " << num1 << endl;
   cout << "Initially, num2 = " << num2 << endl;
  
  auto increment_by_one = [num1,&num2] () {
    
      num1;
      cout<<"increment by num1:"<<num1<<endl;
   num2++;
     cout << "Increment by num2:"<<num2<<endl;
  };

  // invoke lambda function
  increment_by_one();

  cout << "Now, num1 = " << num1 << endl;
   cout << "Now, num2 = " << num2 << endl;

  return 0;
}



2). How can we write a lambda expression without using theautokeyword?
We can do that using the function<> template.
In order to do that, we first need to import <functional> header file.
#include <iostream>
#include<functional>

using namespace std;

int main() {

  function<void(int, int)> add = [] (int a, int b) {
    cout << "Sum: " << a + b;
  };


  add(1, 2);

  return 0;
}



3). How to use Generic Lambda:---
#include<iostream>
Using namespace std;
Int main() {
Auto display=[](auto s) {
Cout<<s<<endl;
};
display(5);
display(“uddand”);
display(4.5f);
return 0;
}


Note:- “auto s” is the parameter list ,this allows us to pass value of different data types to the lambda expression.

4). How to use mutable keyword in lambda Expression:-
We are using mutable keyword to modify the capture by value inside the lambda body without effecting original value.
However capture by reference is also not effecting.
#include<iostream>
Using namespace std;
Int main();
Int num1=1;
Int num2=2;
Cout<<”intial nums:”<<endl;
Cout<<”a=”<<a<<endl;
Cout<<”b=”<<b<<endl;
Auto add_num=[num1,&num2](){
num1++;
num2++;
cout<<”num1=”<<num1<<endl;
cout<<”num2=”<<num2<<endl;
};
Add_num();
Cout<<”now,nums:”<<endl;
Cout<<”num1=”<<num1<<endl;
Cout<<”num2=”<<num2<<endl;
Return 0;
}


5). How to create immediately invoked lambda expression ?
#include<iostream>
Using namespace std;
Int main() {
Int num1=1;
Int num2=2;
Auto nums=[](int a,int b){
Return a+b;
}(num1,num2);
Cout<<”the sum of:”<<num1<<”and”<<num2<<”is<<endl;
Return 0;
}

