#ifndef _APERTURE_DEFINITION_STANDARD_H
#define _APERTURE_DEFINITION_STANDARD_H

#include "ApertureDefinition.hh"
#include "StandardAperture.hh"
#include "GlobalDefs.hh"
#include "../GraphicsState.hh"

#include <iostream>
#include <memory>
#include <string>

class ApertureDefinitionStandard : public ApertureDefinition {
public:
	ApertureDefinitionStandard(int aperture_number, std::shared_ptr<StandardAperture> standard_aperture);
	virtual ~ApertureDefinitionStandard();

private:
	virtual Gerber::SemanticValidity do_check_semantic_validity(GraphicsState& graphics_state, std::string& error_msg);
	virtual std::ostream& do_print(std::ostream& os) const;

	std::shared_ptr<StandardAperture> m_standard_aperture;
};

#endif // _APERTURE_DEFINITION_STANDARD_H