mergeInto(LibraryManager.library, {

    HandleUnityMessage: function (message) {
        document.getElementById("SendMsgToJS").setAttribute("data-message", Pointer_stringify(message));
        document.getElementById("SendMsgToJS").click();
    },

});