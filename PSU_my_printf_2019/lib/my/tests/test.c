/*
** EPITECH PROJECT, 2019
** test unitaire
** File description:
** test
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "../../../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr ();
}

Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("caca\n%s", "wesh\n");
    cr_assert_stdout_eq_str("caca\nwesh\n");
}
