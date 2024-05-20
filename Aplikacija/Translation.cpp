#include <vcl.h>
#include <map>
#include <System.Math.hpp>
#include <Registry.hpp>
void translateForm(TForm* Form, String Language, const std::map<String, std::map<String, String>>& translation){
	for(int i = 0; i < Form->ComponentCount; i++)
		for(auto it_ComponentName = translation.begin(); it_ComponentName != translation.end(); it_ComponentName++)
			if(Form->Components[i]->Name == it_ComponentName->first)
				for(auto it_Language = it_ComponentName->second.begin(); it_Language != it_ComponentName->second.end(); it_Language++)
					if(it_Language->first == Language)
						if(IsPublishedProp(Form->Components[i], "Caption"))
							SetPropValue(Form->Components[i], "Caption", it_Language->second);
}
