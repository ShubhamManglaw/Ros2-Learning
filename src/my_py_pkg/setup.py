from glob import glob
import os

from setuptools import find_packages, setup

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
     glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shubham',
    maintainer_email='shubham@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
	'my_first_node = my_py_pkg.my_first_node:main',
        'publisher_node = my_py_pkg.publisher_node:main',
	'subscriber_node = my_py_pkg.subscriber_node:main',
	'add_two_ints_server = my_py_pkg.add_two_ints_server:main', 
	'param_node = my_py_pkg.param_node:main',
	'turtle_controller = my_py_pkg.turtle_controller:main',
    

    
],
    },

)
