#include<iostream>
#include<string>

// //#### 1&2 print Your Name #########################################################

// std::string printName()
// {
// 	std::string Name;
// 	getline(std::cin, Name);
// 	return Name;
// }
// int main()
// {
// 	std::string Name = printName();
// 	std::cout << "**************************\n";
// 	std::cout << "your name is : ";
// 	std::cout << Name<< std::endl;
// }

 //############ 3  ADD and Even number ###########################################################

// **********my methode***************
// int number()
// {
// 	int num;
// 	std::cout << "enter your Number : ";
// 	std::cin >> num;
// 	if (num < 0)
// 		num = number();
// 	return (num);
// }
// void check(int num)
// {
// 	if (num % 2 != 0)
// 		std::cout << " Number is ODD\n";
// 	else
// 		std::cout << " Number is Even\n";

// }
// int main()
// {
// 	check(number());
// }
//***************** method of teacher ********************************
// enum typeNumber{ ODD = 1, Even = 2};
// int readnumber()
// {
// 	int num;
// 	std::cout << "enter your Number : ";
// 	std::cin >> num;
// 	if (num < 0)
// 		num = readnumber();
// 	return (num);
// }
// typeNumber seveenum(int num)
// {
// 	if (num % 2 != 0)
// 		return (typeNumber::ODD);
// 	else
// 		return (typeNumber::Even);
// }
// void check(typeNumber num)
// {
// 	if (num == typeNumber::ODD)
// 		std::cout << " Number is ODD\n";
// 	else
// 		std::cout << " Number is Even\n";
// }

// int main()
// {
// 	check(seveenum(readnumber()));
// }

// //########## 4 - Hire a driver - Case 1 ###############################################################

// int number(std::string message)
// {
// 	int num;
// 	std::cout << message;
// 	std::cin >> num;
// 	if (num <= 0)
// 		num = number(message);
// 	return (num);
// }
//  std::string str(std::string message)
// {
// 	std::string S;
// 	std::cout << message;
// 	std::cin >> S;

// 	if (S != "NO" && S != "YES")
// 		S = str(message);
// 	else
// 		return (S);
// 	return (S);
// }
// void Check()
// {
// 	int Age = number("enter your Age :");
// 	std::string DL = str("if you have drive license enter < YES > or NOT enter < NO > :");

// 	if (Age <= 21 && DL == "NO")
// 		std::cout << "\n Rejected \n";
// 	else
// 		std::cout << "\n Hired \n";
// }
// int main()
// {
// 	Check();
// }

// //################# 5 - Hire a Driver Case 2 #########################################################

// int number(std::string message)
// {
// 	int num;
// 	std::cout << message;
// 	std::cin >> num;
// 	if (num <= 0)
// 		num = number(message);
// 	return (num);
// }
// std::string str(std::string message)
// {
// 	std::string S;
// 	std::cout << message;
// 	std::cin >> S;

// 	if (S != "NO" && S != "YES")
// 		S = str(message);
// 	else
// 		return (S);
// 	return (S);
// }
// int main()
// {
// 	std::string bra = str ("if you have has Recommendation! enter < YES > or NOT enter < NO > :");
// 	if (bra == "YES")
// 	{
// 		std::cout << " Hired  \n";
// 		return 0;
// 	}
// 	int Age = number("enter your Age :");
// 	std::string DL = str("if you have drive license enter < YES > or NOT enter < NO > :");
// 	if (Age <= 21 && DL == "NO")
// 		std::cout << " Rejected \n";
// 	else
// 		std::cout << " Hired \n";
// }

// //#########################################################################
// //#6

// int main()
// {
// 	std::string firstName;
// 	std::string LastName;
// 	std::cout << "enter your First Name :";
// 	std::cin >> firstName;
// 	std::cout << "enter your Last name:";
// 	std::cin >> LastName;

// 	std::string Fullname;

// 	Fullname = firstName + " " + LastName;
// 	std::cout << Fullname << std::endl;
// }
// #################################################################################
//  #7

// int main()
// {
// 	int num = 0;
// 	int half = 0;
// 	std::cout << "enter your number : ";
// 	std::cin >> num;
// 	half = num / 2;
// 	std::cout << "then printthe half of " << num << " is " << half << std::endl;
// }

// #################################################################################
// #8

// int main()
// {
// 	int Mark;

// 	std::cout << "enter your number : ";
// 	std::cin >> Mark;
// 	if (Mark <= 50)
// 		std::cout << "Fail\n";
// 	else
// 		std::cout << "PASS\n";
// }

// #################################################################################
// #9

// int main()
// {
// 	int Mark1;
// 	int Mark2;
// 	int Mark3;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> Mark1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> Mark2;
// 	std::cout << "enter your  thirte number : ";
// 	std::cin >> Mark3;
// 	int sum = Mark1 + Mark2 + Mark3;
// 	std::cout << "*******************************\n";

// 	std::cout << sum << std::endl;
// }

// #################################################################################
// #10

// int main()
// {
// 	int Mark1;
// 	int Mark2;
// 	int Mark3;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> Mark1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> Mark2;
// 	std::cout << "enter your  thirte number : ";
// 	std::cin >> Mark3;
// 	int sum = Mark1 + Mark2 + Mark3;
// 	std::cout << "*******************************\n";

// 	std::cout << sum / 3<< std::endl;
// }

// #################################################################################
// #11

// int main()
// {
// 	int Mark1;
// 	int Mark2;
// 	int Mark3;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> Mark1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> Mark2;
// 	std::cout << "enter your  thirte number : ";
// 	std::cin >> Mark3;
// 	int sum = Mark1 + Mark2 + Mark3;
// 	std::cout << "*******************************\n";

// 	std::cout << sum / 3 << std::endl;
// 		if (sum <= 50)
// 		std::cout << "Fail\n";
// 	else
// 		std::cout << "PASS\n";
// }

// #################################################################################
// #12

// int main()
// {
// 	int num2;
// 	int num1;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> num1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> num2;
// 	if (num1 > num2)
// 		std::cout << num1 << "\n";
// 	else
// 		std::cout << num2 << "\n";
// }

// #################################################################################
// #13
// int main()
// {
// 	int num2;
// 	int num1;
// 	int num3;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> num1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> num2;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> num3;
// 	if (num1 > num2 && num1 > num3)
// 		std::cout << num1 << "\n";
// 	else if(num2 > num1 && num2 > num3)
// 		std::cout << num2 << "\n";
// 	else
// 		std::cout << num3 << "\n";
// }

// #################################################################################
// #14
// int main()
// {
// 	int num2;
// 	int num1;

// 	std::cout << "enter your  First number : ";
// 	std::cin >> num1;
// 	std::cout << "enter your  Second number : ";
// 	std::cin >> num2;
// 	std::cout << "after swap\n\n";
// 	std::cout << num1 << "\n" << num2 << "\n" << std::endl;
// 	int sum;
// 	sum = num1;
// 	num1 = num2;
// 	num2 = sum;
// 	std::cout << "befour swap\n";
// 	std::cout << "\n" << num1 << "\n"<< num2;
// }

//###################################################################
//#15

// int main()
// {
// 	int a, b, area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;
// 	std::cout << "enter second number : ";
// 	std::cin >> b;

// 	area = a * b;
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//#16

// #include<cmath>
// int main()
// {
// 	int a, b;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;
// 	std::cout << "enter second number : ";
// 	std::cin >> b;

// 	area = a * sqrt(b * b - a*a);
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//#17

// #include<cmath>
// int main()
// {
// 	int a, h;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;
// 	std::cout << "enter second number : ";
// 	std::cin >> h;

// 	area = a/2 *h;
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//#18

// #include<cmath>
// int main()
// {
// 	int a;
// 	float PI = 3.14;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;

// 	area = PI * (a * a);
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//#19 #20

// #include<cmath>
// int main()
// {
// 	int a;
// 	float PI = 3.14;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;

// 	area = (PI * (a * a))/4;
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//##21

// #include<cmath>
// int main()
// {
// 	int a;
// 	float PI = 3.14;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;

// 	area = (PI * (a * a))/4;
// 	std::cout << "\n"
// 			  << area << "\n";
// }

//###################################################################
//##22

// #include<cmath>
// int main()
// {
// 	float a, b;
// 	float PI = 3.14;
// 	float area;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;
// 	std::cout << "enter second number : ";
// 	std::cin >> b;

// 	area = PI * ((b * b) / 4) * ((a * 2 - b) / (a * 2 + b));
// 	std::cout << "\n" << area << "\n";
// }


//###################################################################
//##23

// #include<cmath>
// int main()
// {
// 	float a, b, c;
// 	float PI = 3.14;
// 	float area, p, k;

// 	std::cout << "enter first number : ";
// 	std::cin >> a;
// 	std::cout << "enter second number : ";
// 	std::cin >> b;
// 	std::cout << "enter third number : ";
// 	std::cin >> c;

// 	p = (a + b + c) / 2;
// 	k = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
// 	k = k * k;
// 	area = PI * k;
// 	std::cout << "\n" << area << "\n";
// }


// #################################################################################
// #24

// int main()
// {
// 	int Age;
// 	std::cout << "enter your Age :";
// 	std::cin >> Age;
// 	std::cout << "#############################\n";
// 	if (Age >= 18 && Age <= 45)
// 		std::cout << " valid Age \n";
// 	else
// 		std::cout << " Invalid Age \n";
// }

// #################################################################################
// #24 25 ??

// #################################################################################
// #26

// int main()
// {
// 	int i, N;
// 	std::cout << "enter your number :";
// 	std::cin >> N;
// 	i = 1;
// 	while (i <= N)
// 	{
// 		std::cout << i << "\n";
// 		i++;
// 	}
// }

// #################################################################################
// #27

// int main()
// {
// 	int i, N;
// 	std::cout << "enter your number :";
// 	std::cin >> N;
// 	i = N;
// 	while (i >= 1)
// 	{
// 		std::cout << i << "\n";
// 		i--;
// 	}
// }

// #################################################################################
// #28

// int main()
// {
// 	int i, N ,sum;
// 	std::cout << "enter your number : ";
// 	std::cin >> N;
// 	i = 1;
// 	sum = 0;
// 	while (i <= N)
// 	{
// 		if (i % 2 != 0)
// 			sum = sum + i;
// 		i++;
// 	}
// 	std::cout << sum << "\n";
// }

// // ###### Print Sum Even Numbers 1 to N ########################
// // #29

// int main()
// {
// 	int i, N ,sum;
// 	std::cout << "enter your number : ";
// 	std::cin >> N;
// 	i = 1;
// 	sum = 0;
// 	while (i <= N)
// 	{
// 		if (i % 2 == 0)
// 			sum = sum + i;
// 		i++;
// 	}
// 	std::cout << sum << "\n";
// }

// ########## 30 Factorial of N ###############################################
// ##30 Factorial of N

// int numberpositiv()
// {
// 	int num = 0;
// 	std::cout << "enter your number : ";
// 	std::cin >> num;
// 	if (num <= 0)
// 	{
// 		std::cout << "enter number positive next time\n";
// 		numberpositiv();
// 	}
// 	else
// 		return (num);
// 	return (0);
// }
// int main()
// {
// 	int N, i, sum;
// 	N = numberpositiv();

// 	sum = 1;
// 	for (int i = N; i > 0; i--)
// 	{
// 		sum = i * sum;
// 	}
// 	std::cout << "sum of Factorail : " << sum << "\n";
// }

// // ########## 31 power of 2,3,4 ######################################
// // ##31 power of 2,3,4;

// int main()
// {
// 	int num = 0;
// 	std::cout << "enter your number : ";
// 	std::cin >> num;

// 	std::cout << num * num<< "\n";
// 	std::cout << num * num * num<< "\n";
// 	std::cout << num * num * num * num << "\n";
// }



// ########## 32 power of M #############################################

// int main()
// {
// 	int num = 0;
// 	std::cout << "enter First number : ";
// 	std::cin >> num;
// 	int m = 0;
// 	std::cout << "enter second number : ";
// 	std::cin >> m;
// 	int sum = 1;
// 	for (int i = 0; i < m; i++)
// 	{
// 		sum *= num;
// 	}
// 	std::cout << sum << "\n";
// }

// ########## 33 Grad A,B,C,D,E,F #############################################

// int main()
// {
// 	int num ;
// 	std::cout << "enter First number : ";
// 	std::cin >> num;
// 	std::cout << "-----------------------\n";
// 	if (num >= 90 && num <= 100)
// 		std::cout << " A \n";
// 	else if (num >=80 && num < 90)
// 		std::cout << " B \n";
// 	else if (num >=70 && num < 80)
// 		std::cout << " C \n";
// 	else if (num >=60 && num < 70)
// 		std::cout << " D \n";
// 	else if (num >=50 && num < 60)
// 		std::cout << " E \n";
// 	else
// 		std::cout << " F \n";

// }

// ########## 34 commission percentage #############################################

// int main()
// {
// 	int num ,tv;
// 	std::cout << "enter First number : ";
// 	std::cin >> num;
// 	std::cout << "-----------------------\n";
// 	if (num >=1000000)
// 	{
// 		std::cout << num * 0.01;
// 		std::cout << "A";
// 	}
// 	else if (num <= 1000000 && num >= 500000)
// 	{
// 		std::cout << num * 0.02;
// 		std::cout << "B";
// 	}
// 	if (num <= 500000 && num >= 100000)
// 	{
// 		std::cout << num * 0.03;
// 		std::cout << "C";
// 	}
// 	else if (num >= 100000 && num < 50000)
// 		{
// 		std::cout << num * 0.05;
// 		std::cout << "D";
// 	}
// 	else
// 	{
// 		std::cout << num * 0;
// 		std::cout << "F";
// 	}
// }

// ########## 35 Piggy Bank Calculator #############################################

// int main()
// {
// 	int Pennies;
// 	int Nickels;
// 	int Dimes;
// 	int Quarters;
// 	int Dollars;
// 	std::cout << "enter number to Pennies  : ";
// 	std::cin >> Pennies;
// 	std::cout << "enter number to Nickels  : ";
// 	std::cin >> Nickels;
// 	std::cout << "enter number to Dimes    : ";
// 	std::cin >> Dimes;
// 	std::cout << "enter number to Quarters : ";
// 	std::cin >> Quarters;
// 	std::cout << "enter number to Dollars  : ";
// 	std::cin >> Dollars;
// 	int pen = (Pennies * 1) + (Nickels * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
// 	std::cout << "Pennies :" << pen << std::endl;
// 	std::cout << "Dollars :" << (float)pen / 100 << std::endl;
// }

// ########## 36 simple Calculator #############################################
// int main()
// {
// 	int num1, num2;
// 	std::string OT;

// 	std::cout << "enter number to Pennies  : ";
// 	std::cin >> num1;
// 	std::cout << "enter number to Nickels  : ";
// 	std::cin >> num2;
// 	std::cout << "enter number to Dimes    : ";
// 	std::cin >> OT;
// 	if (OT  == "+")
// 		std::cout << "OUTPUT : " << num1 + num2 << std::endl;
// 	else if (OT == "-")
// 		std::cout << "OUTPUT : " << num1 - num2 << std::endl;
// 	else if (OT == "*")
// 		std::cout << "OUTPUT : " << num1 * num2 << std::endl;
// 	else if (OT == "/")
// 		std::cout << "OUTPUT : " << num1 / num2 << std::endl;
// 	else
// 		std::cout << " wrong oprator  enter one from this + - * /\n";
// }

// ########## 37 sum until -99 #############################################
// int main()
// {
// 	int sum = 0;
// 	int num = 0;
// 	while(num != -99)
// 	{
// 		std::cin >> num;
// 		if (num == -99)
// 		{
// 			std::cout << "------------------------";
// 			std::cout << "the sum :" << sum << "\n";
// 			break;
// 		}
// 		sum =  sum + num;
// 	}
// }

// ########## 38 Is Prime Number #############################################
// int main()
// {
// 	int num;

// 	std::cout << " enter number : ";
// 	std::cin >> num;
// 	if (num > 0)
// 	{
// 		if (num % 2 == 0)
// 			std::cout << num <<  " the number is NOT Prime .\n";
// 		else
// 			std::cout << num << "  the number is Prime .\n";
// 	}
// 	else
// 		std::cout << "number is not positive\n";
// 	return 0;
// }

// ########## 39 Pay remainder #############################################
// int main()
// {
// 	int bill, cash;
// 	std::cout << "enter your totalBill : ";
// 	std::cin >> bill;
// 	std::cout << "enter your cashPaid : ";
// 	std::cin >> cash;
// 	std::cout <<"----------------\n";
// 	std::cout << cash - bill << "\n";
// }

// ########## 40 Service Fee and sales Tax #############################################
// int main()
// {
// 	int bill, cash;
// 	std::cout << "enter your totalBill : ";
// 	std::cin >> bill;
// 	std::cout <<"----------------\n";
// 	cash = bill * 1.1;
// 	cash = cash * 1.16;
// 	std::cout << cash << "\n";
// }

// ########## 41 Weeks and days #############################################
// int main()
// {
// 	int hours;
// 	std::cout << "enter your totalBill : ";
// 	std::cin >> hours;
// 	std::cout <<"----------------\n";
// 	float weeks = (float)hours / (7 * 24);
// 	float Days = (float)hours / 24;

// 	std::cout << "the Weeks :" <<  weeks <<"\n";
// 	std::cout << "the Days :" <<  Days <<"\n";
// }

// ########## 42 task Duration in secands #############################################

// int main()
// {
// 	int days, hours, minutes, secands;
// 	std::cout << "enter number to Days    : ";
// 	std::cin >> days;
// 	std::cout << "enter number to Hours   : ";
// 	std::cin >> hours;
// 	std::cout << "enter number to Minutes : ";
// 	std::cin >> minutes;
// 	std::cout << "enter number to Secands : ";
// 	std::cin >> secands;
// 	days = days * 24 * 60 * 60;
// 	hours = hours * 60 * 60;
// 	minutes = minutes * 60;
// 	std::cout << "Secand : "<<days + hours + minutes + secands << std::endl;
// }

// ########## 43 secands  to days Hours Minutes Secands #####################
// int main()
// {
// 	int days, hours, minutes, secands, num;
// 	std::cout << "enter your number  : ";
// 	std::cin >> num;


// 	days = num / (24 * 60 * 60);
// 	int rem = num % (24 * 60 * 60);

// 	hours = rem / (60 * 60);
// 	rem = rem % (60 * 60);

// 	minutes = rem / 60;
// 	rem = rem % 60;

// 	secands = rem;

// 	std::cout << "------------------------------" << std::endl;
// 	std::cout << "days 	: " << days << std::endl;
// 	std::cout << "Hours 	: " << hours << std::endl;
// 	std::cout << "Minutes	: " << minutes << std::endl;
// 	std::cout << "Secand	: " << secands << std::endl;
// }

// ########## 44 Day of Week #####################
// int number()
// {
// 	int num = 0;
// 	std::cout << "enter one number from 1 to 7 : ";
// 	std::cin >> num;
// 	if (num > 7 || num < 1)
// 		num = number();
// 	return num;
// }
// int main()
// {
// 	int num = number();
// 	std::cout << "------------------------\n";
// 	if (num == 1)
// 		std::cout << "it`s Sunday\n";
// 	else if(num == 2)
// 		std::cout << "it`s Monday\n";
// 	else if(num == 3)
// 		std::cout << "it`s Tuesday\n";
// 	else if(num == 4)
// 		std::cout << "it`s wednesday\n";
// 	else if (num == 5)
// 		std::cout << "it`s Thursday\n";
// 	else if (num == 6)
// 		std::cout << "it`s Friday\n";
// 	else if (num == 7)
// 		std::cout << "it`s Saturday\n";
// 	else
// 		std::cout << "it`s Wrong Day\n";
// }

// ########## 45  month of year #####################
// int number()
// {
// 	int num = 0;
// 	std::cout << "enter number of month  : ";
// 	std::cin >> num;
// 	if (num > 12 || num < 1)
// 		num = number();
// 	return num;
// }
// int main()
// {
// 	int num = number();
// std::cout << "------------------------\n";
// 	if(num == 1)
// 		std::cout << "January\n";
// 	else if(num == 2)
// 		std::cout << "February\n";
// 	else if(num == 3)
// 		std::cout << "March\n";
// 	else if(num == 4)
// 		std::cout << "April\n";
// 	else if (num == 5)
// 		std::cout << "May\n";
// 	else if (num == 6)
// 		std::cout << "June\n";
// 	else if (num == 7)
// 		std::cout << "July\n";
// 	else if (num == 8)
// 		std::cout << "August\n";
// 	else if (num == 9)
// 		std::cout << "September\n";
// 	else if (num == 10)
// 		std::cout << "October\n";
// 	else if (num == 11)
// 		std::cout << "November\n";
// 	else if (num == 12)
// 		std::cout << "December\n";
// 	else
// 		std::cout << "error\n";
// }

// ########## 46 Print Letters from A to Z #####################

// int main()
// {
// 	for (char i = 'A'; i <= 'Z'; i++)
// 		std::cout << i << "\n";
// }

// ########## 47 Loan Instalment Months #####################

// int main()
// {
// 	int loanAmount;
// 	int Monthly_payment;

// 	std::cout << "enter your loan Amount     : ";
// 	std::cin >> loanAmount;
// 	std::cout << "enter your Monthly Payment : ";
// 	std::cin >> Monthly_payment;
// 	if (loanAmount < 0 || Monthly_payment < 0 || loanAmount < Monthly_payment)
// 	{
// 		std::cout << "Error \n";
// 		return 0;
// 	}
	// std::cout << "------------------------\n";
// 	std::cout << loanAmount / Monthly_payment << " Months\n";
// }

//#############48 - Monthly Loan Installment #####################


// int main()
// {
// 	int loanAmount;
// 	int Months;

// 	std::cout << "enter your loan Amount     : ";
// 	std::cin >> loanAmount;
// 	std::cout << "enter how Months           : ";
// 	std::cin >> Months;
// 	if (loanAmount < 0 || Months < 0 || loanAmount < Months)
// 	{
// 		std::cout << "Error \n";
// 		return 0;
// 	}
// 	std::cout << "------------------------\n";
// 	std::cout << loanAmount / Months << " Monthly Payment\n";
// }

//############## 49 - ATM PIN #####################

// int number()
// {
// 	int num;
// 	std::cout << "enter your ATM PIN : ";
// 	std::cin >> num;
// 	if (num != 1234)
// 	{
// 		std::cout << "Wrong PIM \n";
// 		num = number();
// 	}
// 	return num;
// }
// int main()
// {
// 	int num = number();
// 	if (num == 1234)
// 		std::cout << "Your Balance is : 7500 \n";
// }

//############## 49 - ATM PIN  3 times #####################
// int number(int n)
// {
// 	int num;

// 	std::cout << "enter your ATM PIN : ";
// 	std::cin >> num;
// 	if (num != 1234)
// 	{
// 		n++;
// 		if (n == 3)
// 		{
// 			std::cout << "Wrong PIM \n";
// 			return 0;
// 		}
// 		std::cout << "Wrong PIM \n";
// 		num = number(n);
// 	}
// 	return num;
// }
// int main()
// {
// 	int num = number(0);
// 	if (num == 1234)
// 		std::cout << "Your Balance is : 7500 \n";
// 	else
// 		std::cout << "\nInvalide ATM PIN . CARD IS LOCKED \n";
// }

