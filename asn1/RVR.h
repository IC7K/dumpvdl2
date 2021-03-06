/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RVR_H_
#define	_RVR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RVRFeet.h"
#include "RVRMeters.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RVR_PR {
	RVR_PR_NOTHING,	/* No components present */
	RVR_PR_rVRFeet,
	RVR_PR_rVRMeters
} RVR_PR;

/* RVR */
typedef struct RVR {
	RVR_PR present;
	union RVR_u {
		RVRFeet_t	 rVRFeet;
		RVRMeters_t	 rVRMeters;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RVR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RVR;

#ifdef __cplusplus
}
#endif

#endif	/* _RVR_H_ */
#include <asn_internal.h>
