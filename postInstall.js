const fs = require('fs');
const pkg = require("./package.json");

const vkversion = pkg.config.POST_DEFAULT_BINDING_VERSION;

try {
  fs.unlinkSync('./platform-types');
} catch (e) { }
try {
  fs.symlinkSync(`./generated/${vkversion}/${process.platform}/`, './platform-types', 'junction');
} catch (e) { }