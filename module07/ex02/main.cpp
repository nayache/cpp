/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:26:20 by nayache           #+#    #+#             */
/*   Updated: 2021/11/02 17:47:20 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
int main()
{
	Array<std::string> nullArr;
	nullArr.print();

	Array<std::string> strArr(3);
	strArr[0] = "Hello ";
	strArr[1] = "World !";
	
	//deep copy
	Array<std::string> copyArr(strArr);
	
	strArr[2] = " ;)";
	
	strArr.print();
	copyArr.print();
	
	Array<int> intArr(3);
	intArr[0] = 1;
	intArr[1] = 2;
	intArr[2] = 3;
	intArr.print();
	
	Array<double> doubleArr(3);
	doubleArr[0] = 1.50;
	doubleArr[1] = 2.49;
	doubleArr[2] = 3.90;
	doubleArr.print();

	try {
		doubleArr[10] = 42;
	}
	catch (std::exception& e){

		std::cout << e.what() << std::endl;
	}

	return (0);
}
