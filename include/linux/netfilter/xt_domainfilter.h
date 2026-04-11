/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _XT_DOMAINFILTER_MATCH_H
#define _XT_DOMAINFILTER_MATCH_H

#include <linux/types.h>

/**
 * struct xt_domainfilter_info - structure for domain matching in netfilter
 * @domain: domain name to match (null-terminated string, max 255 chars + null)
 * @flags: matching flags (see XT_DOMAINFILTER_* defines)
 * @invert: if non-zero, invert the match result
 *
 * This structure is used by the xt_domainfilter netfilter match module
 * to filter network packets based on domain name patterns.
 */
struct xt_domainfilter_info {
	char domain[256];
	__u8 flags;
	__u8 invert;
	__u8 reserved[2];	/* alignment padding, must be zero */
};

/* Flag definitions for xt_domainfilter_info.flags */
#define XT_DOMAINFILTER_INVERT		0x01	/* Invert match logic */
#define XT_DOMAINFILTER_SUBDOMAIN	0x02	/* Match subdomains recursively */
#define XT_DOMAINFILTER_CASE_INSENS	0x04	/* Case-insensitive matching */

/* Reserved for future extensions – must be zero in current ABI */
#define XT_DOMAINFILTER_RESERVED_MASK	0xF8

#endif /* _XT_DOMAINFILTER_MATCH_H */
