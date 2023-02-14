// Potência
double pot(double x, unsigned n) {
	if (n=0) {
		return 1;
	}
	return x * pot(x,n-1);
}

// Sequência de Fibonacci
int fib(unsigned n) {
	if (n == 0) {
		return 0;
	} else if (n == 1 || n == 2) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

// Fatorial
int fat(unsigned n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fat(n-1);
}

// Quantidade de digitos
int dig(int n) {
	static int cont = 1;
	if (n/10 == 0) {
		return cont;
	}
	cont++;
	dig(n/10);
}
