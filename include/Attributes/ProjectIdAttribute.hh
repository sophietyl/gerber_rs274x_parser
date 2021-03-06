#ifndef _PROJECT_ID_ATTRIBUTE_H
#define _PROJECT_ID_ATTRIBUTE_H

#include "Attributes/StandardAttribute.hh"
#include "Util/ValueWithLocation.hh"
#include "location.hh"

#include <string>

class ProjectIdAttribute : public StandardAttribute {
public:
	ProjectIdAttribute(ValueWithLocation<std::string> proj_name,
					   ValueWithLocation<std::string> guid,
					   ValueWithLocation<std::string> revision,
					   yy::location name_location = yy::location());
	virtual ~ProjectIdAttribute();

private:
	ValueWithLocation<std::string> m_proj_name;
	ValueWithLocation<std::string> m_guid;
	ValueWithLocation<std::string> m_revision;
};

#endif // _PROJECT_ID_ATTRIBUTE_H
