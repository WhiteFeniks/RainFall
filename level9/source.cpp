class N {
	N::N(unsigned int i)
	{
		this->value = i;
		this->vtable = 0x8048848;
	}
	N::setAnnotation(char *str)
	{
		int len;
	
		len = strlen(str);
		memcpy(this->annotation, str, len);
	}
	virtual int N::operator+(N &n)
	{
		return this->value + n.value;
	}
	virtual int N::operator-(N &n)
	{
		return this->value - n.value;
	}
	unsigned int value;
	char annotation[100];
	void *vtable;
};

void main(int argc, char **argv)
{
	unsigned int	*ptr;
	unsigned int	*ptr2;

	N				*n;
	N				*m;

	if (argc <= 1)
		exit(1);
	ptr = new unsigned char[108];
	n = new (ptr)N(5);
	ptr2 = new unsigned char[108];
	m = new (ptr2)N(6);
	n->setAnnotation(argv[1]);
	(void *)(**func_ptr) = m;
	*func_ptr(m, n);
}