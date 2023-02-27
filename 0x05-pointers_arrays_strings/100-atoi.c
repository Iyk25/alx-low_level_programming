int h, p;

	h = 0;
	p = 1;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h > 0)
				h = (h * 10) + (s[i] - '0');
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0');
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;

