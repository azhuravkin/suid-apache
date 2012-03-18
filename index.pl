#!/usr/bin/perl -U

open(SHADOW, "/etc/shadow");

foreach (<SHADOW>) {
	print;
}

close(SHADOW);
