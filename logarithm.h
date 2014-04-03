#include "MathematicalExpression.h"

class logarithm : public MathematicalExpression{
	private:
		MathematicalExpression base;
		MathematicalExpression exponent;
		
	public:
		Logarithm(MathematicalExpression base, MathematicalExpression exponent);
		MathematicalExpression add(MathematicalExpression addend);
		MathematicalExpression subtract(MathematicalExpression subtrahend);
		MathematicalExpression multiply(MathematicalExpression multiplicand);
		MathematicalExpression divide(MathematicalExpression dividend);
		MathematicalExpression simplify();
		string toString();
		double toDecimal();
};
