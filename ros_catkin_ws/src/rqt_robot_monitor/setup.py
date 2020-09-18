#!/usr/bin/env python3
try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

d = generate_distutils_setup(
    packages=['rqt_robot_monitor'],
    package_dir={'': 'src'}
)

setup(**d)
