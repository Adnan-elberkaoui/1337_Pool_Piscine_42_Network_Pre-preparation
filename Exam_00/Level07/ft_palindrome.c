/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 01:40:53 by cypher            #+#    #+#             */
/*   Updated: 2026/07/19 18:48:47 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_palindrome
// Expected files   : ft_palindrome.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that checks if an integer is a palindrome.

// Return 1 if the integer is a palindrome.
// Return 0 otherwise.

// 0 is considered a palindrome.
// Any negative number is not a palindrome.

// It should be prototyped as such

// int    ft_palindrome(int n);
// ==========================================================================================


int    ft_palindrome(int n)
{
	int result;
	int num;
	int digit;
	
	if (n < 0)
		return 0;
	
	num = n;
	result = 0;
	
	while(num > 0)
	{
		digit = num % 10;
		result = result * 10 + digit;
		num = num / 10;
	}

	if(result == n)
		return 1;
	else
		return 0;
}


	
