/******************************************************************************
*******************************************************************************
**
**  Copyright (C) Sistina Software, Inc.  1997-2003  All rights reserved.
**  Copyright (C) 2004 Red Hat, Inc.  All rights reserved.
**  
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __DIR_DOT_H__
#define __DIR_DOT_H__


int dlm_dir_nodeid(struct dlm_rsb *rsb);
int dlm_dir_name2nodeid(struct dlm_ls *ls, char *name, int length);
void dlm_dir_remove_entry(struct dlm_ls *ls, int nodeid, char *name, int len);
void dlm_dir_clear(struct dlm_ls *ls);
void dlm_clear_free_entries(struct dlm_ls *ls);
int dlm_recover_directory(struct dlm_ls *ls);
int dlm_dir_lookup(struct dlm_ls *ls, int nodeid, char *name, int namelen,
	int *r_nodeid);
int dlm_copy_master_names(struct dlm_ls *ls, char *inbuf, int inlen,
	char *outbuf, int outlen, int nodeid);
int dlm_dir_rebuild_wait(struct dlm_ls *ls);

#endif				/* __DIR_DOT_H__ */
