#ifndef INTERFACE_TEMPLATE_H 
#define INTERFACE_TEMPLATE_H

#include <stdio.h>

struct sample_template{
	struct sample_template_class *clazz;
}

struct sample_template_class{
	void (*function_1)(struct sample_template *self, int a, char* str);
	int (*function_2)(struct sample_template *self, double a, int[] array);
	void (*free)(struct sample_template *self);
}

static inline
void sample_template_function_1(struct sample_template *self, int a, char* str){
	return self->clazz->function_1(self, a, str);
}

static inline
int sample_template_function_2(struct sample_template *self, double a, int[] array){
	return self->clazz->funtion2(self, a, array);
}

static inline
void sample_template_free(struct sample_template self){
	self->clazz->free(self);
}

struct sample_template *sample_template_new(int *args);

#endif
