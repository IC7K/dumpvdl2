/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "ATCUplinkMessageData.h"

static int
memb_routeClearanceData_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_elementIds_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_elementIds_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_routeClearanceData_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_routeClearanceData_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_elementIds_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_elementIds_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ATCUplinkMsgElementId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_elementIds_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_elementIds_specs_2 = {
	sizeof(struct ATCUplinkMessageData__elementIds),
	offsetof(struct ATCUplinkMessageData__elementIds, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_elementIds_2 = {
	"elementIds",
	"elementIds",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_elementIds_tags_2,
	sizeof(asn_DEF_elementIds_tags_2)
		/sizeof(asn_DEF_elementIds_tags_2[0]), /* 1 */
	asn_DEF_elementIds_tags_2,	/* Same as above */
	sizeof(asn_DEF_elementIds_tags_2)
		/sizeof(asn_DEF_elementIds_tags_2[0]), /* 1 */
	&asn_PER_type_elementIds_constr_2,
	asn_MBR_elementIds_2,
	1,	/* Single element */
	&asn_SPC_elementIds_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_routeClearanceData_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RouteClearance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_routeClearanceData_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_routeClearanceData_specs_5 = {
	sizeof(struct ATCUplinkMessageData__constrainedData__routeClearanceData),
	offsetof(struct ATCUplinkMessageData__constrainedData__routeClearanceData, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_routeClearanceData_5 = {
	"routeClearanceData",
	"routeClearanceData",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_routeClearanceData_tags_5,
	sizeof(asn_DEF_routeClearanceData_tags_5)
		/sizeof(asn_DEF_routeClearanceData_tags_5[0]), /* 1 */
	asn_DEF_routeClearanceData_tags_5,	/* Same as above */
	sizeof(asn_DEF_routeClearanceData_tags_5)
		/sizeof(asn_DEF_routeClearanceData_tags_5[0]), /* 1 */
	&asn_PER_type_routeClearanceData_constr_5,
	asn_MBR_routeClearanceData_5,
	1,	/* Single element */
	&asn_SPC_routeClearanceData_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_constrainedData_4[] = {
	{ ATF_POINTER, 1, offsetof(struct ATCUplinkMessageData__constrainedData, routeClearanceData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_routeClearanceData_5,
		memb_routeClearanceData_constraint_4,
		&asn_PER_memb_routeClearanceData_constr_5,
		0,
		"routeClearanceData"
		},
};
static const int asn_MAP_constrainedData_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_constrainedData_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_constrainedData_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* routeClearanceData */
};
static asn_SEQUENCE_specifics_t asn_SPC_constrainedData_specs_4 = {
	sizeof(struct ATCUplinkMessageData__constrainedData),
	offsetof(struct ATCUplinkMessageData__constrainedData, _asn_ctx),
	asn_MAP_constrainedData_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_constrainedData_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_constrainedData_4 = {
	"constrainedData",
	"constrainedData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_constrainedData_tags_4,
	sizeof(asn_DEF_constrainedData_tags_4)
		/sizeof(asn_DEF_constrainedData_tags_4[0]), /* 1 */
	asn_DEF_constrainedData_tags_4,	/* Same as above */
	sizeof(asn_DEF_constrainedData_tags_4)
		/sizeof(asn_DEF_constrainedData_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_constrainedData_4,
	1,	/* Elements count */
	&asn_SPC_constrainedData_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ATCUplinkMessageData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ATCUplinkMessageData, elementIds),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_elementIds_2,
		memb_elementIds_constraint_1,
		&asn_PER_memb_elementIds_constr_2,
		0,
		"elementIds"
		},
	{ ATF_POINTER, 1, offsetof(struct ATCUplinkMessageData, constrainedData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_constrainedData_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"constrainedData"
		},
};
static const int asn_MAP_ATCUplinkMessageData_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ATCUplinkMessageData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ATCUplinkMessageData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* elementIds */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* constrainedData */
};
static asn_SEQUENCE_specifics_t asn_SPC_ATCUplinkMessageData_specs_1 = {
	sizeof(struct ATCUplinkMessageData),
	offsetof(struct ATCUplinkMessageData, _asn_ctx),
	asn_MAP_ATCUplinkMessageData_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ATCUplinkMessageData_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ATCUplinkMessageData = {
	"ATCUplinkMessageData",
	"ATCUplinkMessageData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ATCUplinkMessageData_tags_1,
	sizeof(asn_DEF_ATCUplinkMessageData_tags_1)
		/sizeof(asn_DEF_ATCUplinkMessageData_tags_1[0]), /* 1 */
	asn_DEF_ATCUplinkMessageData_tags_1,	/* Same as above */
	sizeof(asn_DEF_ATCUplinkMessageData_tags_1)
		/sizeof(asn_DEF_ATCUplinkMessageData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ATCUplinkMessageData_1,
	2,	/* Elements count */
	&asn_SPC_ATCUplinkMessageData_specs_1	/* Additional specs */
};
