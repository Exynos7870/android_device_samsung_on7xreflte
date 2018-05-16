#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

#define TOTAL_VARIANTS 4 //Total number of variants

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant G611F_model = {
    .model = "SM-G611F",
    .codename = "on7xrefltedd"
};

static const variant G611K_model = {
    .model = "SM-G611K",
    .codename = "on7xrefltekk"
};

static const variant G611S_model = {
    .model = "SM-G611S",
    .codename = "on7xreflteks"
};

static const variant G611M_model = {
    .model = "SM-G611M",
    .codename = "on7xreflteub"
};

static const variant *all_variants[TOTAL_VARIANTS] = {
    &G611f_model,
    &G611K_model,
    &G611S_model,
    &G611M_model,
};

#endif // INIT_SEC_H
