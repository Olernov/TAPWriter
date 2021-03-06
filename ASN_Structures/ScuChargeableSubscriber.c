/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#include "ScuChargeableSubscriber.h"

static asn_TYPE_member_t asn_MBR_ScuChargeableSubscriber_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ScuChargeableSubscriber, choice.gsmChargeableSubscriber),
		(ASN_TAG_CLASS_APPLICATION | (286 << 2)),
		0,
		&asn_DEF_GsmChargeableSubscriber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gsmChargeableSubscriber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ScuChargeableSubscriber, choice.minChargeableSubscriber),
		(ASN_TAG_CLASS_APPLICATION | (254 << 2)),
		0,
		&asn_DEF_MinChargeableSubscriber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"minChargeableSubscriber"
		},
};
static ber_tlv_tag_t asn_DEF_ScuChargeableSubscriber_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (430 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ScuChargeableSubscriber_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (254 << 2)), 1, 0, 0 }, /* minChargeableSubscriber */
    { (ASN_TAG_CLASS_APPLICATION | (286 << 2)), 0, 0, 0 } /* gsmChargeableSubscriber */
};
static asn_CHOICE_specifics_t asn_SPC_ScuChargeableSubscriber_specs_1 = {
	sizeof(struct ScuChargeableSubscriber),
	offsetof(struct ScuChargeableSubscriber, _asn_ctx),
	offsetof(struct ScuChargeableSubscriber, present),
	sizeof(((struct ScuChargeableSubscriber *)0)->present),
	asn_MAP_ScuChargeableSubscriber_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ScuChargeableSubscriber = {
	"ScuChargeableSubscriber",
	"ScuChargeableSubscriber",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	asn_DEF_ScuChargeableSubscriber_tags_1,
	sizeof(asn_DEF_ScuChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_ScuChargeableSubscriber_tags_1[0]), /* 1 */
	asn_DEF_ScuChargeableSubscriber_tags_1,	/* Same as above */
	sizeof(asn_DEF_ScuChargeableSubscriber_tags_1)
		/sizeof(asn_DEF_ScuChargeableSubscriber_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ScuChargeableSubscriber_1,
	2,	/* Elements count */
	&asn_SPC_ScuChargeableSubscriber_specs_1	/* Additional specs */
};

