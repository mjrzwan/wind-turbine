#include "slrtappmapping.h"
#include "./maps/Wind_Turbine.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Wind_Turbine> */
		{ /* SignalMapInfo */
			Wind_Turbine_BIOMAP,
			Wind_Turbine_LBLMAP,
			Wind_Turbine_SIDMAP,
			Wind_Turbine_SBIO,
			Wind_Turbine_SLBL,
			{0,1199},
			376,
		},
		{ /* ParamMapInfo */
			Wind_Turbine_PTIDSMAP,
			Wind_Turbine_PTNAMESMAP,
			Wind_Turbine_SPTMAP,
			{0,250},
			251,
		},
		"Wind_Turbine",
		"",
		"Wind_Turbine",
		50,
		Wind_Turbine_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}