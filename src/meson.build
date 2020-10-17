config = configuration_data()
config.set('GETFATTR_PATH', getfattr.path())
configure_file(
    input: 'config.h.in',
    output: 'config.h',
    configuration: config
)
executable(
    'glusterfs-getfattr',
    sources: ['main.c'],
    install: true
)
