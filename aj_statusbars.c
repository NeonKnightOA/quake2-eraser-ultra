/* Status Bars */
#include "g_local.h"
#include "aj_statusbars.h"

char *lithium_statusbar =
"yb	-24 "

// health
"xv	0 "
"hnum "
"xv	50 "
"pic 0 "

// ammo
"if 2 "
"	xv	100 "
"	anum "
"	xv	150 "
"	pic 2 "
"endif "

// armor
"if 4 "
"	xv	200 "
"	rnum "
"	xv	250 "
"	pic 4 "
"endif "

// selected item
"if 6 "
"	xv	296 "
"	pic 6 "
"endif "

"yb	-50 "

// picked up item
"if 7 "
"	xv	0 "
"	pic 7 "
"	xv	26 "
"	yb	-42 "
"	stat_string 8 "
"	yb	-50 "
"endif "

// timer
"if 9 "
  "xv 246 "
  "num 2 10 "
  "xv 296 "
  "pic 9 "
"endif "

//  help / weapon icon 
"if 11 "
  "xv 148 "
  "pic 11 "
"endif "

//  frags
"xr -42 "
"yt 2 "
"string \"Frags\" "
"xr	-52 "
"yt 12 "
"num 3 14 "

//  frags / hr
//"if 28 "
  "xr -82 "
  "yt 46 "
  "string \"Frags / hr\" "
  "xr	-52 "
  "yt 56 "
  "num 3 28 "
// "endif "

//  Players
//"if 29 "
  "xr -58 "
  "yt 90 "
  "string \"Players\" "
  "xr -52 "
  "yt 100 "
  "num 3 29 "
//"endif "

//  Place
//"if 30 "
  "xr -42 "
  "yt 134 "
  "string \"Place\" "
  "xr -52 "
  "yt 144 "
  "num 3 30 "
//"endif "

//  Rune
"if 31 "
  "xr -36 "
  "yt 182 "
  "string \"Rune\" "
  "xr	-52 "
  "yt 192 "
//  "string2 \"None\" "
  "stat_string 31 "
"endif "

// id view state
"if 27 "
  "xv 0 "
  "yb -58 "
  "string \"Viewing\" "
  "xv 64 "
  "stat_string 27 "
"endif "

// safety/observer mode
"if 16 "
  "xv 64 "
  "yb -68 "
  "stat_string 16 "
"endif "
;


char *lithium_ammostatusbar =
"yb	-24 "

// health
"xv	0 "
"hnum "
"xv	50 "
"pic 0 "

// ammo
"if 2 "
"	xv	100 "
"	anum "
"	xv	150 "
"	pic 2 "
"endif "

// armor
"if 4 "
"	xv	200 "
"	rnum "
"	xv	250 "
"	pic 4 "
"endif "

// selected item
"if 6 "
"	xv	296 "
"	pic 6 "
"endif "

"yb	-50 "

// picked up item
"if 7 "
"	xv	0 "
"	pic 7 "
"	xv	26 "
"	yb	-42 "
"	stat_string 8 "
"	yb	-50 "
"endif "

// timer
"if 9 "
  "xv 246 "
  "num 2 10 "
  "xv 296 "
  "pic 9 "
"endif "

//  help / weapon icon 
"if 11 "
  "xv 148 "
  "pic 11 "
"endif "

//  frags
"xr	-52 "
"yt 2 "
"num 3 14 "

//  Shells
  "xr -24 "
  "yt 36 "
  "pic 17 "
  "xr	-74 "
  "yt 36 "
  "num 3 23 "

//  Bullets
  "xr -24 "
  "yt 60 "
  "pic 18 "
  "xr -74 "
  "yt 60 "
  "num 3 24 "

//  Grenades
  "xr -24 "
  "yt 84 "
  "pic 19 "
  "xr -74 "
  "yt 84 "
  "num 3 25 "

//  Rockets
  "xr -24 "
  "yt 108 "
  "pic 20 "
  "xr	-74 "
  "yt 108 "
  "num 3 26 " /// was 28

//  Cells
  "xr -24 "
  "yt 132 "
  "pic 21 "
  "xr	-74 "
  "yt 132 "
  "num 3 29 "
  
//  Slugs
  "xr -24 "
  "yt 156 "
  "pic 22 "
  "xr	-74 "
  "yt 156 "
  "num 3 30 "

//  Rune
"if 31 "
  "xr -36 "
  "yt 182 "
  "string \"Rune\" "
  "xr	-52 "
  "yt 192 "
//  "string2 \"None\" "
  "stat_string 31 "
"endif "

// id view state
"if 27 "
  "xv 0 "
  "yb -58 "
  "string \"Viewing\" "
  "xv 64 "
  "stat_string 27 "
"endif "

// safety/observer mode
"if 16 "
  "xv 64 "
  "yb -68 "
  "stat_string 16 "
"endif "
;



char *ctfenhanced_statusbar =
"yb	-24 "

// health
"xv	0 "
"hnum "
"xv	50 "
"pic 0 "

// ammo
"if 2 "
"	xv	100 "
"	anum "
"	xv	150 "
"	pic 2 "
"endif "

// armor
"if 4 "
"	xv	200 "
"	rnum "
"	xv	250 "
"	pic 4 "
"endif "

// selected item
"if 6 "
"	xv	296 "
"	pic 6 "
"endif "

"yb	-50 "

// picked up item
"if 7 "
"	xv	0 "
"	pic 7 "
"	xv	26 "
"	yb	-42 "
"	stat_string 8 "
"	yb	-50 "
"endif "

// timer
"if 9 "
  "xv 246 "
  "num 2 10 "
  "xv 296 "
  "pic 9 "
"endif "

//  help / weapon icon 
"if 11 "
  "xv 148 "
  "pic 11 "
"endif "

//  frags
"xr -42 "
"yt 2 "
"string \"Frags\" "
"xr	-52 "
"yt 12 "
"num 3 14 "

//tech
"yb -129 "
"if 26 "
  "xr -26 "
  "pic 26 "
"endif "

// red team
"yb -102 "
"if 17 "
  "xr -26 "
  "pic 17 "
"endif "
"xr -62 "
"num 2 18 "
//joined overlay
"if 22 "
  "yb -104 "
  "xr -28 "
  "pic 22 "
"endif "

// blue team
"yb -75 "
"if 19 "
  "xr -26 "
  "pic 19 "
"endif "
"xr -62 "
"num 2 20 "
"if 23 "
  "yb -77 "
  "xr -28 "
  "pic 23 "
"endif "

// have flag graph
"if 21 "
  "yt 90 " // was 26
  "xr -24 "
  "pic 21 "
"endif "

// id view state
"if 27 "
  "xv 0 "
  "yb -58 "
  "string \"Viewing\" "
  "xv 64 "
  "stat_string 27 "
"endif "

// safety/observer mode
"if 16 "
  "xv 64 "
  "yb -68 "
  "stat_string 16 "
"endif "
;


char *ttctf_statusbar =
"yb	-24 "

// health
"xv	0 "
"hnum "
"xv	50 "
"pic 0 "

// ammo
"if 2 "
"	xv	100 "
"	anum "
"	xv	150 "
"	pic 2 "
"endif "

// armor
"if 4 "
"	xv	200 "
"	rnum "
"	xv	250 "
"	pic 4 "
"endif "

// selected item
"if 6 "
"	xv	296 "
"	pic 6 "
"endif "

"yb	-50 "

// picked up item
"if 7 "
"	xv	0 "
"	pic 7 "
"	xv	26 "
"	yb	-42 "
"	stat_string 8 "
"	yb	-50 "
"endif "

// timer
"if 9 "
  "xv 246 "
  "num 2 10 "
  "xv 296 "
  "pic 9 "
"endif "

//  help / weapon icon 
"if 11 "
  "xv 148 "
  "pic 11 "
"endif "

//  frags
"xr -42 "
"yt 2 "
"string \"Frags\" "
"xr	-52 "
"yt 12 "
"num 3 14 "

//tech
"yb -129 "
"if 26 "
  "xr -26 "
  "pic 26 "
"endif "

// red team
"yb -102 "
"if 17 "
  "xr -26 "
  "pic 17 "
"endif "
"xr -62 "
"num 2 18 "
//joined overlay
"if 22 "
  "yb -104 "
  "xr -28 "
  "pic 22 "
"endif "

// blue team
"yb -75 "
"if 19 "
  "xr -26 "
  "pic 19 "
"endif "
"xr -62 "
"num 2 20 "
"if 23 "
  "yb -77 "
  "xr -28 "
  "pic 23 "
"endif "

// green team
"yb -49 "
"if 28 "
  "xr -28 "
  "pic 28 "
"endif "
"xr -62 "
"num 2 30 "
//"if 23 "
//  "yb -77 "
//  "xr -28 "
//  "pic 23 "
//"endif "


// have flag graph
"if 21 "
  "yt 90 " // was 26
  "xr -24 "
  "pic 21 "
"endif "

// id view state
"if 27 "
  "xv 0 "
  "yb -58 "
  "string \"Viewing\" "
  "xv 64 "
  "stat_string 27 "
"endif "

// safety/observer mode
"if 16 "
  "xv 64 "
  "yb -68 "
  "stat_string 16 "
"endif "
;

extern char *single_statusbar; // defined in g_spawn.c
extern char *dm_statusbar;     // defined in g_spawn.c


// this is a function to remove all these nasty hacks for the different status bars
// called from 
void aj_choosebar(void)
{
	if (ttctf->value)
	{
		gi.imageindex("3tsbctf1");	//precaches
		gi.imageindex("3tsbctf2");
		gi.imageindex("3tsbctf3");
		gi.imageindex("i_ctf1");
		gi.imageindex("i_ctf2");
		gi.imageindex("i_ctf1d");
		gi.imageindex("i_ctf2d");
		gi.imageindex("i_ctf1t");
		gi.imageindex("i_ctf2t");
		gi.imageindex("i_ctfj");
		gi.configstring (CS_STATUSBAR, ttctf_statusbar);
	}
	else if (ctf->value)
	{			
		if ((int)def_hud->value==1)
		{
			gi.imageindex("sbctf1");	//precaches
			gi.imageindex("sbctf2");
			gi.imageindex("i_ctf1");
			gi.imageindex("i_ctf2");
			gi.imageindex("i_ctf1d");
			gi.imageindex("i_ctf2d");
			gi.imageindex("i_ctf1t");
			gi.imageindex("i_ctf2t");
			gi.imageindex("i_ctfj");
//			gi.imageindex("pci_1");		// PCI header
			gi.configstring (CS_STATUSBAR, ctf_statusbar);
		}
		else
		{
			gi.imageindex("sbctf1");	// precaches
			gi.imageindex("sbctf2");
			gi.imageindex("i_ctf1");
			gi.imageindex("i_ctf2");
			gi.imageindex("i_ctf1d");
			gi.imageindex("i_ctf2d");
			gi.imageindex("i_ctf1t");
			gi.imageindex("i_ctf2t");
			gi.imageindex("i_ctfj");
//			gi.imageindex("pci_1");		// PCI header
			gi.configstring (CS_STATUSBAR, ctfenhanced_statusbar);
		}
	}
	else if (deathmatch->value)
	{
		switch ((int)def_hud->value)
		{
		case 1: 
			gi.configstring (CS_STATUSBAR, dm_statusbar);
			break;
		case 2: 
			gi.configstring (CS_STATUSBAR, lithium_statusbar);
			break;
		case 3:
			gi.imageindex ("a_shells");
			gi.imageindex ("a_bullets");
			gi.imageindex ("a_grenades");
			gi.imageindex ("a_rockets");
			gi.imageindex ("a_cells");
			gi.imageindex ("a_slugs");
			gi.configstring (CS_STATUSBAR, lithium_ammostatusbar);
			break;
		}
	}
	else // single player
		gi.configstring (CS_STATUSBAR, single_statusbar);

}


void lithium_updatestats(edict_t *ent)
{
	int		i, j, k;
	int		sorted[MAX_CLIENTS];
	int		sortedscores[MAX_CLIENTS];
	int		score, num_players;
	edict_t		*cl_ent;
	int		client_no, position;

	if ((ent->bot_client || ctf->value || (level.intermissiontime && level.intermissiontime<level.time))
		&& ent->client->respawn_time != level.time)
		return;

	switch ((int)def_hud->value)
	{
	case 2:

		// work out number of players, and current placings
		num_players = 0;
		for (i=0 ; i<game.maxclients ; i++)
		{
			cl_ent = g_edicts + 1 + i;
			if (!cl_ent->inuse)
				continue;
			if (cl_ent==ent)
				client_no=i;
	
			score = game.clients[i].resp.score;
			for (j=0 ; j<num_players ; j++)
			{
				if (score > sortedscores[j])
					break;
			}
			for (k=num_players ; k>j ; k--)
			{
				sorted[k] = sorted[k-1];
				sortedscores[k] = sortedscores[k-1];
			}
			sorted[j] = i;
			sortedscores[j] = score;
			num_players++;
		}

		for (i=0; i<num_players; i++)
			if (sorted[i]==client_no)
				position=i+1;

		ent->client->ps.stats[STAT_LITHIUM_PLACE] = position;
		ent->client->ps.stats[STAT_LITHIUM_PLAYERS] = num_players;
		ent->client->ps.stats[STAT_LITHIUM_FPH] = (int)((float)(ent->client->resp.score) * (60.0/((level.framenum - ent->client->resp.enterframe)/600.0)));
		break;
	case 3:
		if (ent->health <= 0)
			break;
		ent->client->ps.stats[STAT_CTF_TEAM1_PIC] = gi.imageindex ("a_shells");  // 17
		ent->client->ps.stats[STAT_CTF_TEAM1_CAPS] = gi.imageindex ("a_bullets"); //18
		ent->client->ps.stats[STAT_CTF_TEAM2_PIC] = gi.imageindex ("a_grenades"); //19
		ent->client->ps.stats[STAT_CTF_TEAM2_CAPS] = gi.imageindex ("a_rockets"); //20
		ent->client->ps.stats[STAT_CTF_FLAG_PIC] = gi.imageindex ("a_cells");     //21
		ent->client->ps.stats[STAT_CTF_JOINED_TEAM1_PIC] = gi.imageindex ("a_slugs");  //22

		ent->client->ps.stats[STAT_CTF_JOINED_TEAM2_PIC] = ent->client->pers.inventory[ITEM_INDEX(item_shells)];  
		ent->client->ps.stats[STAT_CTF_TEAM1_HEADER] = ent->client->pers.inventory[ITEM_INDEX(item_bullets)];  
		ent->client->ps.stats[STAT_CTF_TEAM2_HEADER] = ent->client->pers.inventory[ITEM_INDEX(item_grenades)];  
		ent->client->ps.stats[STAT_CTF_TECH] = ent->client->pers.inventory[ITEM_INDEX(item_rockets)];  // was FPH
		ent->client->ps.stats[STAT_LITHIUM_PLAYERS] = ent->client->pers.inventory[ITEM_INDEX(item_cells)];
		ent->client->ps.stats[STAT_LITHIUM_PLACE] = ent->client->pers.inventory[ITEM_INDEX(item_slugs)];
		break;
	}

}
