
#pragma once

#include "Decorator.h"

// -------------------------------
// class 'Jumbo', extends 'Decorator'.
// This class is for decorator design pattern.
// -------------------------------
class Jumbo : public Decorator
{
public:

	// -------------------------------
	// constructor, assign operator, etc.
	// -------------------------------

	// Construct using decorated parent object.
	// Param 'decoBurito',
	//   should be the pointer from the 'new' operator,
	//   or NULL.
	Jumbo(Burito* decoBurito);
	Jumbo();
	Jumbo(const Jumbo &input);
	Jumbo(Jumbo &&input);
	virtual Jumbo& operator=(const Jumbo& input);
	virtual Jumbo& operator=(Jumbo&& input);
	virtual ~Jumbo();
	virtual Burito* copyobj() const;
protected:
	// Copy constructor but use specific decorated parent object.
	// Param 'decoBurito',
	//   should be the pointer from the 'new' operator,
	//   or NULL.
	Jumbo(const Jumbo &input, Burito* decoBurito);
public:
	// Call constructor,
	//   with self instance and 'decoBurito' param, using 'new' operator.
	// This will ignore 'decoBurito' param,
	//   if this class 'type' does not have decorated parent class at all.
	// This function is for making non-recursive call possible,
	//   while copying object.
	virtual Burito* copyobjExceptDeco(Burito* decoBurito) const;


	// -------------------------------
	// methods
	// -------------------------------

public:

	// NOTE:
	// 'Self' version makes non-recursive call possible,
	//   for decorator design pattern.

	// Get cost of burito, for current class only.
	virtual int getCostSelf() const;
	// Get string description of burito, for current class only.
	virtual std::string getDescriptionSelf() const;
	// Get ingredientInfo, for current class only
	virtual int getIngredientInfoSelf() const;

};

//EOF
