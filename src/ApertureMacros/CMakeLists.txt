set(APERTURE_MACRO_SRCS
	ApertureMacroContent.cc
	ApertureMacroPrimitive.cc
	ApertureMacroPrimitiveCenterLine.cc
	ApertureMacroPrimitiveCircle.cc
	ApertureMacroPrimitiveComment.cc
	ApertureMacroPrimitiveMoire.cc
	ApertureMacroPrimitiveOutline.cc
	ApertureMacroPrimitivePolygon.cc
	ApertureMacroPrimitiveThermal.cc
	ApertureMacroPrimitiveVectorLine.cc
	ApertureMacroVariableDefinition.cc
	ApertureMacroVariableEnvironment.cc
	InstantiatedApertureMacroPrimitive.cc
	ArithmeticExpressionElement.cc
	BinaryOperationArithmeticExpressionElement.cc
	ConstantArithmeticExpressionElement.cc
	VariableReferenceArithmeticExpressionElement.cc
	)

add_library(ApertureMacrosLib ${APERTURE_MACRO_SRCS})
