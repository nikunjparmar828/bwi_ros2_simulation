from setuptools import find_packages
from setuptools import setup

setup(
    name='bwi_tasks_interface',
    version='0.0.0',
    packages=find_packages(
        include=('bwi_tasks_interface', 'bwi_tasks_interface.*')),
)
