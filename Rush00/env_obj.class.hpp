/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_obj.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:55:37 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:55:38 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_OBJ_HPP
# define env_obj_HPP

class	env_obj
{
	protected:

		unsigned int	_color;
		unsigned int	_size;
		unsigned int	_speed;
		int				_x;
		int				_y;
		char			_symbol;
		// bool			_direction;

	public:

		env_obj(void);
		env_obj(env_obj const &obj);
		env_obj &	operator=(env_obj const &obj);
		~env_obj(void);

		move();
};

# endif
