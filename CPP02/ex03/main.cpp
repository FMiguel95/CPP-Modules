/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:31:16 by fernacar          #+#    #+#             */
/*   Updated: 2023/12/14 23:32:49 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(0,0);
	Point b(10,0);
	Point c(0,10);
	Point p(1,8);
	std::cout << "point is inside: " << bsp(a, b, c, p) << std::endl;

	p = Point(50,50);
	std::cout << "point is outside: " << bsp(a, b, c, p) << std::endl;

	p = Point(5,5);
	std::cout << "point on edge: " << bsp(a, b, c, p) << std::endl;

	p = Point(10,0);
	std::cout << "point on vertex: " << bsp(a, b, c, p) << std::endl;

	return 0;
}
