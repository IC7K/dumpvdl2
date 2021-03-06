/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSICAOUnitName_H_
#define	_FANSICAOUnitName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSICAOFacilityIdentification.h"
#include "FANSICAOFacilityFunction.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSICAOUnitName */
typedef struct FANSICAOUnitName {
	FANSICAOFacilityIdentification_t	 iCAOFacilityIdentification;
	FANSICAOFacilityFunction_t	 iCAOFacilityFunction;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSICAOUnitName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOUnitName;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOUnitName_H_ */
#include <asn_internal.h>
