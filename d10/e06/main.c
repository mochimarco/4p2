


void	do_op(int num1, char operator, int num2)
{

	switch (operator)
	{
		case '+':
			ft_putnbr(num1 + num2);
			break;
		case '-':
			ft_putnbr(num1 - num2);
			break;
		case '*':
			ft_putnbr(num1 * num2);
			break;
		case '/':
			if(!num2)
				error("Stop : division by zero");
			else
				ft_putnbr(num1 / num2);
			break;
		case '%':
			if(!num2)
				error("Stop : division by zero");
			else
				ft_putnbr(num1 / num2);
			break;
		default:
			error("0")
			break;

	}
