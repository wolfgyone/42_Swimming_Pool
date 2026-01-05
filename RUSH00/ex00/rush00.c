/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:17:07 by dgarot            #+#    #+#             */
/*   Updated: 2025/11/29 15:55:18 by dgarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int max_line, int max_col)
{
	char my_init_set[9]="oooo--|| ";
	int line ;
	int col ; 
	
	//my_init_set = "oooo--|| \n";
	line = 1;
	col = 1;

	char hedge_up_left_symbol;
	char hedge_up_right_symbol;
	char hedge_down_left_symbol;
	char hedge_down_right_symbol;
	char up_side_symbol;
	char down_side_symbol;
	char left_side_symbol;
	char right_side_symbol;
	char fill_symbol;
	
	hedge_up_left_symbol = my_init_set[0];
	hedge_up_right_symbol = my_init_set[1];
	hedge_down_left_symbol = my_init_set[2];
	hedge_down_right_symbol = my_init_set[3];
	up_side_symbol = my_init_set[4];
	down_side_symbol = my_init_set[5];
	left_side_symbol = my_init_set[6];
	right_side_symbol = my_init_set[7];
	fill_symbol = my_init_set[8];

	while (line <= max_line)
	{	
		while (col <= max_col)
		{
		if 	(line==1 && (col!=1 || col!=max_col)) 
			ft_putchar(up_side_symbol);
		else if (col==1)&&(line==1)			
			{
		 		ft_putchar(hedge_up_left_symbol);
			} else if ((col==max_col)&&(max_col>1))
				{	
					ft_putchar(hedge_up_right_symbol);
				}
		if (line==max_line && (col!=1 || col!=max_col))
			ft_putchar(down_side_symbol);
		else if ((col==max_line) && (max_line >1))
			{
		 		ft_putchar(hedge_down_left_symbol);
			} 
			else if ((col==max_col) && (max_col>1) && (max_line>1))
					{	
						ft_putchar(hedge_down_right_symbol);
					}
		if ((col==1)&&(line!=1 ||line!=max_line))
			{
				ft_putchar(left_side_symbol);
			} 
			else if ((col==max_col) && (line!=1 ||line!=max_line))
					{
						ft_putchar(right_side_symbol);
					}
		if (line!=1 && line!=max_line && col!=1 && col!=max_col)
			{
				ft_putchar(fill_symbol);
			}		
		col++;
		}	

		ft_putchar('\n');
		line ++;
	}
}

// if (a == 1) {

//     if (b == 1) {
//         // --- case 1-1 ---
//     }
//     else if (b == 2) {
//         // --- case 1-2 ---
//     }
//     else if (b == 3) {
//         // --- case 1-3 ---
//     }

// }
// else if (a == 2) {

//     if (b == 1) {
//         // --- case 2-1 ---
//     }
//     else if (b == 2) {
//         // --- case 2-2 ---
//     }
//     else if (b == 3) {
//         // --- case 2-3 ---
//     }

// }
// else if (a == 3) {

//     if (b == 1) {
//         // --- case 3-1 ---
//     }
//     else if (b == 2) {
//         // --- case 3-2 ---
//     }
//     else if (b == 3) {
//         // --- case 3-3 ---
//     }

// }