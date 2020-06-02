mergeInto(LibraryManager.library, {

    HandleUnityMessage: function (message) {
        document.getElementById("SendMsgToJS").value = Pointer_stringify(message);
        document.getElementById("SendMsgToJS").click();
    },

});