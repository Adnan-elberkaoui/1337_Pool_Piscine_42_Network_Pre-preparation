int is_power_of_2(unsigned int n)
{
	unsigned int power = 1;

	if(n == 0)
		return 0;
	
	if (n == 1)
    	return 1;

	while (n >= power)
	{
    	power = power * 2;
		if(power == n)
			return 1;
	}
	return 0;
}
