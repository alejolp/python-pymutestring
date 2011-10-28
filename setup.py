#!/usr/bin/env python

from distutils.core import setup, Extension

module1 = Extension('pymutestring',
                    sources = ['pymutestring.c'])

setup (name = 'pymutestring',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])

